// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDNADBRESPONSEBODYDNADB_HPP_
#define ALIBABACLOUD_MODELS_GETDNADBRESPONSEBODYDNADB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDNADBResponseBodyDNADB : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDNADBResponseBodyDNADB& obj) { 
      DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_TO_JSON(DBId, DBId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBRegion, DBRegion_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDNADBResponseBodyDNADB& obj) { 
      DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_FROM_JSON(DBId, DBId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBRegion, DBRegion_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDNADBResponseBodyDNADB() = default ;
    GetDNADBResponseBodyDNADB(const GetDNADBResponseBodyDNADB &) = default ;
    GetDNADBResponseBodyDNADB(GetDNADBResponseBodyDNADB &&) = default ;
    GetDNADBResponseBodyDNADB(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDNADBResponseBodyDNADB() = default ;
    GetDNADBResponseBodyDNADB& operator=(const GetDNADBResponseBodyDNADB &) = default ;
    GetDNADBResponseBodyDNADB& operator=(GetDNADBResponseBodyDNADB &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBDescription_ != nullptr
        && this->DBId_ != nullptr && this->DBName_ != nullptr && this->DBRegion_ != nullptr && this->DBType_ != nullptr && this->status_ != nullptr; };
    // DBDescription Field Functions 
    bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
    void deleteDBDescription() { this->DBDescription_ = nullptr;};
    inline string DBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
    inline GetDNADBResponseBodyDNADB& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


    // DBId Field Functions 
    bool hasDBId() const { return this->DBId_ != nullptr;};
    void deleteDBId() { this->DBId_ = nullptr;};
    inline string DBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
    inline GetDNADBResponseBodyDNADB& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline GetDNADBResponseBodyDNADB& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBRegion Field Functions 
    bool hasDBRegion() const { return this->DBRegion_ != nullptr;};
    void deleteDBRegion() { this->DBRegion_ = nullptr;};
    inline string DBRegion() const { DARABONBA_PTR_GET_DEFAULT(DBRegion_, "") };
    inline GetDNADBResponseBodyDNADB& setDBRegion(string DBRegion) { DARABONBA_PTR_SET_VALUE(DBRegion_, DBRegion) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline GetDNADBResponseBodyDNADB& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDNADBResponseBodyDNADB& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> DBDescription_ = nullptr;
    std::shared_ptr<string> DBId_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> DBRegion_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
