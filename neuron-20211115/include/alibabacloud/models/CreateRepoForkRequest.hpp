// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOFORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOFORKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReposForkCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateRepoForkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoForkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoForkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateRepoForkRequest() = default ;
    CreateRepoForkRequest(const CreateRepoForkRequest &) = default ;
    CreateRepoForkRequest(CreateRepoForkRequest &&) = default ;
    CreateRepoForkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoForkRequest() = default ;
    CreateRepoForkRequest& operator=(const CreateRepoForkRequest &) = default ;
    CreateRepoForkRequest& operator=(CreateRepoForkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ReposForkCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ReposForkCreateCmd) };
    inline ReposForkCreateCmd getBody() { DARABONBA_PTR_GET(body_, ReposForkCreateCmd) };
    inline CreateRepoForkRequest& setBody(const ReposForkCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateRepoForkRequest& setBody(ReposForkCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ReposForkCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
