// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DBVERSIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DBVERSIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DBVersionDetailSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DBVersionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DBVersionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(specs, specs_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DBVersionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(specs, specs_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DBVersionDetail() = default ;
    DBVersionDetail(const DBVersionDetail &) = default ;
    DBVersionDetail(DBVersionDetail &&) = default ;
    DBVersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DBVersionDetail() = default ;
    DBVersionDetail& operator=(const DBVersionDetail &) = default ;
    DBVersionDetail& operator=(DBVersionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specs_ == nullptr
        && return this->status_ == nullptr && return this->version_ == nullptr; };
    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<DBVersionDetailSpecs> & specs() const { DARABONBA_PTR_GET_CONST(specs_, vector<DBVersionDetailSpecs>) };
    inline vector<DBVersionDetailSpecs> specs() { DARABONBA_PTR_GET(specs_, vector<DBVersionDetailSpecs>) };
    inline DBVersionDetail& setSpecs(const vector<DBVersionDetailSpecs> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline DBVersionDetail& setSpecs(vector<DBVersionDetailSpecs> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DBVersionDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DBVersionDetail& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<vector<DBVersionDetailSpecs>> specs_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
