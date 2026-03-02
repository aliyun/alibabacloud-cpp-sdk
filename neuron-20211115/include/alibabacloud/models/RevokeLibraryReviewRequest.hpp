// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKELIBRARYREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKELIBRARYREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RevokeLibraryReviewCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RevokeLibraryReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeLibraryReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeLibraryReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RevokeLibraryReviewRequest() = default ;
    RevokeLibraryReviewRequest(const RevokeLibraryReviewRequest &) = default ;
    RevokeLibraryReviewRequest(RevokeLibraryReviewRequest &&) = default ;
    RevokeLibraryReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeLibraryReviewRequest() = default ;
    RevokeLibraryReviewRequest& operator=(const RevokeLibraryReviewRequest &) = default ;
    RevokeLibraryReviewRequest& operator=(RevokeLibraryReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RevokeLibraryReviewCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, RevokeLibraryReviewCmd) };
    inline RevokeLibraryReviewCmd getBody() { DARABONBA_PTR_GET(body_, RevokeLibraryReviewCmd) };
    inline RevokeLibraryReviewRequest& setBody(const RevokeLibraryReviewCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RevokeLibraryReviewRequest& setBody(RevokeLibraryReviewCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<RevokeLibraryReviewCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
