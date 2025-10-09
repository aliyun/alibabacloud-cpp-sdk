// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDIJobResponseBody() = default ;
    CreateDIJobResponseBody(const CreateDIJobResponseBody &) = default ;
    CreateDIJobResponseBody(CreateDIJobResponseBody &&) = default ;
    CreateDIJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobResponseBody() = default ;
    CreateDIJobResponseBody& operator=(const CreateDIJobResponseBody &) = default ;
    CreateDIJobResponseBody& operator=(CreateDIJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->id_ != nullptr && this->requestId_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline CreateDIJobResponseBody& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateDIJobResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDIJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is deprecated and is replaced by the Id parameter.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
