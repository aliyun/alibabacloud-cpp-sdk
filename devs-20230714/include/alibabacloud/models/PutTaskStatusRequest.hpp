// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class PutTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, PutTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    PutTaskStatusRequest() = default ;
    PutTaskStatusRequest(const PutTaskStatusRequest &) = default ;
    PutTaskStatusRequest(PutTaskStatusRequest &&) = default ;
    PutTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutTaskStatusRequest() = default ;
    PutTaskStatusRequest& operator=(const PutTaskStatusRequest &) = default ;
    PutTaskStatusRequest& operator=(PutTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->force_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Task & body() const { DARABONBA_PTR_GET_CONST(body_, Task) };
    inline Task body() { DARABONBA_PTR_GET(body_, Task) };
    inline PutTaskStatusRequest& setBody(const Task & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PutTaskStatusRequest& setBody(Task && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline PutTaskStatusRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    std::shared_ptr<Task> body_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
