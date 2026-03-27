// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUMODELDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUMODELDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetUmodelDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUmodelDataRequest& obj) { 
      DARABONBA_ANY_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(method, method_);
    };
    friend void from_json(const Darabonba::Json& j, GetUmodelDataRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(method, method_);
    };
    GetUmodelDataRequest() = default ;
    GetUmodelDataRequest(const GetUmodelDataRequest &) = default ;
    GetUmodelDataRequest(GetUmodelDataRequest &&) = default ;
    GetUmodelDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUmodelDataRequest() = default ;
    GetUmodelDataRequest& operator=(const GetUmodelDataRequest &) = default ;
    GetUmodelDataRequest& operator=(GetUmodelDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->method_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
    Darabonba::Json & getContent() { DARABONBA_GET(content_) };
    inline GetUmodelDataRequest& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline GetUmodelDataRequest& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetUmodelDataRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


  protected:
    // Query conditions
    Darabonba::Json content_ {};
    // Method
    // 
    // This parameter is required.
    shared_ptr<string> method_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
