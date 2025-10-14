// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRIESINFORESPONSEBODYDENTRYPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRIESINFORESPONSEBODYDENTRYPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentriesInfoResponseBodyDentryProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentriesInfoResponseBodyDentryProperties& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentriesInfoResponseBodyDentryProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
    };
    QueryDentriesInfoResponseBodyDentryProperties() = default ;
    QueryDentriesInfoResponseBodyDentryProperties(const QueryDentriesInfoResponseBodyDentryProperties &) = default ;
    QueryDentriesInfoResponseBodyDentryProperties(QueryDentriesInfoResponseBodyDentryProperties &&) = default ;
    QueryDentriesInfoResponseBodyDentryProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentriesInfoResponseBodyDentryProperties() = default ;
    QueryDentriesInfoResponseBodyDentryProperties& operator=(const QueryDentriesInfoResponseBodyDentryProperties &) = default ;
    QueryDentriesInfoResponseBodyDentryProperties& operator=(QueryDentriesInfoResponseBodyDentryProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readOnly_ == nullptr; };
    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline QueryDentriesInfoResponseBodyDentryProperties& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    std::shared_ptr<bool> readOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
