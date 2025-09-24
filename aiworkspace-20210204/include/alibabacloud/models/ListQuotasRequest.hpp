// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListQuotasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListQuotasRequest() = default ;
    ListQuotasRequest(const ListQuotasRequest &) = default ;
    ListQuotasRequest(ListQuotasRequest &&) = default ;
    ListQuotasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasRequest() = default ;
    ListQuotasRequest& operator=(const ListQuotasRequest &) = default ;
    ListQuotasRequest& operator=(ListQuotasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListQuotasRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The quota name. Fuzzy search is supported.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
