// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetSqlInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetSqlInstanceRequest() = default ;
    GetSqlInstanceRequest(const GetSqlInstanceRequest &) = default ;
    GetSqlInstanceRequest(GetSqlInstanceRequest &&) = default ;
    GetSqlInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlInstanceRequest() = default ;
    GetSqlInstanceRequest& operator=(const GetSqlInstanceRequest &) = default ;
    GetSqlInstanceRequest& operator=(GetSqlInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->version_ != nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetSqlInstanceRequest& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
