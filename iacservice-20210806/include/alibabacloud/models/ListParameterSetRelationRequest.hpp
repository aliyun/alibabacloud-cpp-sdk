// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARAMETERSETRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPARAMETERSETRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListParameterSetRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListParameterSetRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListParameterSetRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    ListParameterSetRelationRequest() = default ;
    ListParameterSetRelationRequest(const ListParameterSetRelationRequest &) = default ;
    ListParameterSetRelationRequest(ListParameterSetRelationRequest &&) = default ;
    ListParameterSetRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListParameterSetRelationRequest() = default ;
    ListParameterSetRelationRequest& operator=(const ListParameterSetRelationRequest &) = default ;
    ListParameterSetRelationRequest& operator=(ListParameterSetRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListParameterSetRelationRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListParameterSetRelationRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
