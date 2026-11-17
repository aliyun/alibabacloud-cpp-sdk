// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIMODELSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIMODELSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeleteAiModelSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAiModelSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAiModelSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
    };
    DeleteAiModelSourceRequest() = default ;
    DeleteAiModelSourceRequest(const DeleteAiModelSourceRequest &) = default ;
    DeleteAiModelSourceRequest(DeleteAiModelSourceRequest &&) = default ;
    DeleteAiModelSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAiModelSourceRequest() = default ;
    DeleteAiModelSourceRequest& operator=(const DeleteAiModelSourceRequest &) = default ;
    DeleteAiModelSourceRequest& operator=(DeleteAiModelSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectedVersion_ == nullptr; };
    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline DeleteAiModelSourceRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


  protected:
    // The expected object version. Use the version returned by the most recent query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
