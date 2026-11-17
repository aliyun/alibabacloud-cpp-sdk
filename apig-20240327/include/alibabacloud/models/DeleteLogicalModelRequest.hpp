// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGICALMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGICALMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeleteLogicalModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogicalModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expectedRevision, expectedRevision_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogicalModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expectedRevision, expectedRevision_);
    };
    DeleteLogicalModelRequest() = default ;
    DeleteLogicalModelRequest(const DeleteLogicalModelRequest &) = default ;
    DeleteLogicalModelRequest(DeleteLogicalModelRequest &&) = default ;
    DeleteLogicalModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogicalModelRequest() = default ;
    DeleteLogicalModelRequest& operator=(const DeleteLogicalModelRequest &) = default ;
    DeleteLogicalModelRequest& operator=(DeleteLogicalModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectedRevision_ == nullptr; };
    // expectedRevision Field Functions 
    bool hasExpectedRevision() const { return this->expectedRevision_ != nullptr;};
    void deleteExpectedRevision() { this->expectedRevision_ = nullptr;};
    inline int64_t getExpectedRevision() const { DARABONBA_PTR_GET_DEFAULT(expectedRevision_, 0L) };
    inline DeleteLogicalModelRequest& setExpectedRevision(int64_t expectedRevision) { DARABONBA_PTR_SET_VALUE(expectedRevision_, expectedRevision) };


  protected:
    // The expected object version number.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedRevision_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
