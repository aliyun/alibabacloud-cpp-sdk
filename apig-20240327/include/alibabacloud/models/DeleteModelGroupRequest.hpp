// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeleteModelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
    };
    DeleteModelGroupRequest() = default ;
    DeleteModelGroupRequest(const DeleteModelGroupRequest &) = default ;
    DeleteModelGroupRequest(DeleteModelGroupRequest &&) = default ;
    DeleteModelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelGroupRequest() = default ;
    DeleteModelGroupRequest& operator=(const DeleteModelGroupRequest &) = default ;
    DeleteModelGroupRequest& operator=(DeleteModelGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectedVersion_ == nullptr; };
    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline DeleteModelGroupRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


  protected:
    // The expected version. Only this version is deleted. API saved-state references prevent deletion, and authorization references are cleared.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
