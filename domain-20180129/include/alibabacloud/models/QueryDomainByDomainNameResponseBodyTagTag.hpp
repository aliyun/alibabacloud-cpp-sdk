// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODYTAGTAG_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODYTAGTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainByDomainNameResponseBodyTagTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByDomainNameResponseBodyTagTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Vaue, vaue_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByDomainNameResponseBodyTagTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Vaue, vaue_);
    };
    QueryDomainByDomainNameResponseBodyTagTag() = default ;
    QueryDomainByDomainNameResponseBodyTagTag(const QueryDomainByDomainNameResponseBodyTagTag &) = default ;
    QueryDomainByDomainNameResponseBodyTagTag(QueryDomainByDomainNameResponseBodyTagTag &&) = default ;
    QueryDomainByDomainNameResponseBodyTagTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainByDomainNameResponseBodyTagTag() = default ;
    QueryDomainByDomainNameResponseBodyTagTag& operator=(const QueryDomainByDomainNameResponseBodyTagTag &) = default ;
    QueryDomainByDomainNameResponseBodyTagTag& operator=(QueryDomainByDomainNameResponseBodyTagTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->vaue_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline QueryDomainByDomainNameResponseBodyTagTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // vaue Field Functions 
    bool hasVaue() const { return this->vaue_ != nullptr;};
    void deleteVaue() { this->vaue_ = nullptr;};
    inline string vaue() const { DARABONBA_PTR_GET_DEFAULT(vaue_, "") };
    inline QueryDomainByDomainNameResponseBodyTagTag& setVaue(string vaue) { DARABONBA_PTR_SET_VALUE(vaue_, vaue) };


  protected:
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    std::shared_ptr<string> vaue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
