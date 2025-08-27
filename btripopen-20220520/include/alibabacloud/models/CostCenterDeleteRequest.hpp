// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTCENTERDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COSTCENTERDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CostCenterDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostCenterDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
    };
    friend void from_json(const Darabonba::Json& j, CostCenterDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
    };
    CostCenterDeleteRequest() = default ;
    CostCenterDeleteRequest(const CostCenterDeleteRequest &) = default ;
    CostCenterDeleteRequest(CostCenterDeleteRequest &&) = default ;
    CostCenterDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostCenterDeleteRequest() = default ;
    CostCenterDeleteRequest& operator=(const CostCenterDeleteRequest &) = default ;
    CostCenterDeleteRequest& operator=(CostCenterDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->thirdpartId_ != nullptr; };
    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline CostCenterDeleteRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> thirdpartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
