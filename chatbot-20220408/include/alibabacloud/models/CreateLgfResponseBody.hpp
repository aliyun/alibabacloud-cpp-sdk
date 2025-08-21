// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELGFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELGFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateLgfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLgfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLgfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLgfResponseBody() = default ;
    CreateLgfResponseBody(const CreateLgfResponseBody &) = default ;
    CreateLgfResponseBody(CreateLgfResponseBody &&) = default ;
    CreateLgfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLgfResponseBody() = default ;
    CreateLgfResponseBody& operator=(const CreateLgfResponseBody &) = default ;
    CreateLgfResponseBody& operator=(CreateLgfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lgfId_ != nullptr
        && this->requestId_ != nullptr; };
    // lgfId Field Functions 
    bool hasLgfId() const { return this->lgfId_ != nullptr;};
    void deleteLgfId() { this->lgfId_ = nullptr;};
    inline int64_t lgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
    inline CreateLgfResponseBody& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLgfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // LGF ID
    std::shared_ptr<int64_t> lgfId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
