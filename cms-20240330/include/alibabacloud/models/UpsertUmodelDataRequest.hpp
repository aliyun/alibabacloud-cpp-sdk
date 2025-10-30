// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTUMODELDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTUMODELDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpsertUmodelDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertUmodelDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(elements, elements_);
      DARABONBA_PTR_TO_JSON(method, method_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertUmodelDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(elements, elements_);
      DARABONBA_PTR_FROM_JSON(method, method_);
    };
    UpsertUmodelDataRequest() = default ;
    UpsertUmodelDataRequest(const UpsertUmodelDataRequest &) = default ;
    UpsertUmodelDataRequest(UpsertUmodelDataRequest &&) = default ;
    UpsertUmodelDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertUmodelDataRequest() = default ;
    UpsertUmodelDataRequest& operator=(const UpsertUmodelDataRequest &) = default ;
    UpsertUmodelDataRequest& operator=(UpsertUmodelDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elements_ == nullptr
        && return this->method_ == nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Darabonba::Json> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> elements() { DARABONBA_PTR_GET(elements_, vector<Darabonba::Json>) };
    inline UpsertUmodelDataRequest& setElements(const vector<Darabonba::Json> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline UpsertUmodelDataRequest& setElements(vector<Darabonba::Json> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline UpsertUmodelDataRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


  protected:
    // Element content
    std::shared_ptr<vector<Darabonba::Json>> elements_ = nullptr;
    // Method
    std::shared_ptr<string> method_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
