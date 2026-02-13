// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHRESOURCEADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHRESOURCEADDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AISearchResourceAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AISearchResourceAddRequest& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AISearchResourceAddRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AISearchResourceAddRequest() = default ;
    AISearchResourceAddRequest(const AISearchResourceAddRequest &) = default ;
    AISearchResourceAddRequest(AISearchResourceAddRequest &&) = default ;
    AISearchResourceAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AISearchResourceAddRequest() = default ;
    AISearchResourceAddRequest& operator=(const AISearchResourceAddRequest &) = default ;
    AISearchResourceAddRequest& operator=(AISearchResourceAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline AISearchResourceAddRequest& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline AISearchResourceAddRequest& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AISearchResourceAddRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json data_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
