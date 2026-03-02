// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIBRARYREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIBRARYREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LibraryReviewCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateLibraryReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLibraryReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLibraryReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateLibraryReviewRequest() = default ;
    CreateLibraryReviewRequest(const CreateLibraryReviewRequest &) = default ;
    CreateLibraryReviewRequest(CreateLibraryReviewRequest &&) = default ;
    CreateLibraryReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLibraryReviewRequest() = default ;
    CreateLibraryReviewRequest& operator=(const CreateLibraryReviewRequest &) = default ;
    CreateLibraryReviewRequest& operator=(CreateLibraryReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const LibraryReviewCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, LibraryReviewCreateCmd) };
    inline LibraryReviewCreateCmd getBody() { DARABONBA_PTR_GET(body_, LibraryReviewCreateCmd) };
    inline CreateLibraryReviewRequest& setBody(const LibraryReviewCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateLibraryReviewRequest& setBody(LibraryReviewCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<LibraryReviewCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
