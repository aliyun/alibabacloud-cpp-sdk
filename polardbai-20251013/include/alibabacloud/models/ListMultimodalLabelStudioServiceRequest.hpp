// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIMODALLABELSTUDIOSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIMODALLABELSTUDIOSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ListMultimodalLabelStudioServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultimodalLabelStudioServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultimodalLabelStudioServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    ListMultimodalLabelStudioServiceRequest() = default ;
    ListMultimodalLabelStudioServiceRequest(const ListMultimodalLabelStudioServiceRequest &) = default ;
    ListMultimodalLabelStudioServiceRequest(ListMultimodalLabelStudioServiceRequest &&) = default ;
    ListMultimodalLabelStudioServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultimodalLabelStudioServiceRequest() = default ;
    ListMultimodalLabelStudioServiceRequest& operator=(const ListMultimodalLabelStudioServiceRequest &) = default ;
    ListMultimodalLabelStudioServiceRequest& operator=(ListMultimodalLabelStudioServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListMultimodalLabelStudioServiceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
