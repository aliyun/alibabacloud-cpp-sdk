// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATEPARAMETERSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATEPARAMETERSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class DissociateParameterSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateParameterSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(parameterSetIds, parameterSetIds_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateParameterSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(parameterSetIds, parameterSetIds_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    DissociateParameterSetRequest() = default ;
    DissociateParameterSetRequest(const DissociateParameterSetRequest &) = default ;
    DissociateParameterSetRequest(DissociateParameterSetRequest &&) = default ;
    DissociateParameterSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateParameterSetRequest() = default ;
    DissociateParameterSetRequest& operator=(const DissociateParameterSetRequest &) = default ;
    DissociateParameterSetRequest& operator=(DissociateParameterSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterSetIds_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
    // parameterSetIds Field Functions 
    bool hasParameterSetIds() const { return this->parameterSetIds_ != nullptr;};
    void deleteParameterSetIds() { this->parameterSetIds_ = nullptr;};
    inline const vector<string> & getParameterSetIds() const { DARABONBA_PTR_GET_CONST(parameterSetIds_, vector<string>) };
    inline vector<string> getParameterSetIds() { DARABONBA_PTR_GET(parameterSetIds_, vector<string>) };
    inline DissociateParameterSetRequest& setParameterSetIds(const vector<string> & parameterSetIds) { DARABONBA_PTR_SET_VALUE(parameterSetIds_, parameterSetIds) };
    inline DissociateParameterSetRequest& setParameterSetIds(vector<string> && parameterSetIds) { DARABONBA_PTR_SET_RVALUE(parameterSetIds_, parameterSetIds) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DissociateParameterSetRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DissociateParameterSetRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> parameterSetIds_ {};
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
