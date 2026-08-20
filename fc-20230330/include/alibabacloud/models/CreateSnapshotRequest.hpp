// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSnapshotInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    CreateSnapshotRequest() = default ;
    CreateSnapshotRequest(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest(CreateSnapshotRequest &&) = default ;
    CreateSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotRequest() = default ;
    CreateSnapshotRequest& operator=(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest& operator=(CreateSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->qualifier_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateSnapshotInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateSnapshotInput) };
    inline CreateSnapshotInput getBody() { DARABONBA_PTR_GET(body_, CreateSnapshotInput) };
    inline CreateSnapshotRequest& setBody(const CreateSnapshotInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSnapshotRequest& setBody(CreateSnapshotInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline CreateSnapshotRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The request body for creating a snapshot.
    shared_ptr<CreateSnapshotInput> body_ {};
    // The function alias.
    shared_ptr<string> qualifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
