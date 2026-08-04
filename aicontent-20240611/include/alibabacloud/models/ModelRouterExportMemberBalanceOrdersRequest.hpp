// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTEREXPORTMEMBERBALANCEORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTEREXPORTMEMBERBALANCEORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterExportMemberBalanceOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterExportMemberBalanceOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterExportMemberBalanceOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
    };
    ModelRouterExportMemberBalanceOrdersRequest() = default ;
    ModelRouterExportMemberBalanceOrdersRequest(const ModelRouterExportMemberBalanceOrdersRequest &) = default ;
    ModelRouterExportMemberBalanceOrdersRequest(ModelRouterExportMemberBalanceOrdersRequest &&) = default ;
    ModelRouterExportMemberBalanceOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterExportMemberBalanceOrdersRequest() = default ;
    ModelRouterExportMemberBalanceOrdersRequest& operator=(const ModelRouterExportMemberBalanceOrdersRequest &) = default ;
    ModelRouterExportMemberBalanceOrdersRequest& operator=(ModelRouterExportMemberBalanceOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balanceType_ == nullptr
        && this->direction_ == nullptr; };
    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterExportMemberBalanceOrdersRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModelRouterExportMemberBalanceOrdersRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


  protected:
    // The balance type filter. Valid values: permanent and monthly.
    shared_ptr<string> balanceType_ {};
    // The change direction filter. Valid values: in and out.
    shared_ptr<string> direction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
