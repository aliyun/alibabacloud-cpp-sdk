// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLTRANSTABLEMETAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLTRANSTABLEMETAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetSqlTransTableMetaInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlTransTableMetaInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_TO_JSON(sourceSqlScript, sourceSqlScript_);
      DARABONBA_PTR_TO_JSON(targetDialect, targetDialect_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlTransTableMetaInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_FROM_JSON(sourceSqlScript, sourceSqlScript_);
      DARABONBA_PTR_FROM_JSON(targetDialect, targetDialect_);
    };
    GetSqlTransTableMetaInfoRequest() = default ;
    GetSqlTransTableMetaInfoRequest(const GetSqlTransTableMetaInfoRequest &) = default ;
    GetSqlTransTableMetaInfoRequest(GetSqlTransTableMetaInfoRequest &&) = default ;
    GetSqlTransTableMetaInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlTransTableMetaInfoRequest() = default ;
    GetSqlTransTableMetaInfoRequest& operator=(const GetSqlTransTableMetaInfoRequest &) = default ;
    GetSqlTransTableMetaInfoRequest& operator=(GetSqlTransTableMetaInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceDialect_ == nullptr
        && this->sourceSqlScript_ == nullptr && this->targetDialect_ == nullptr; };
    // sourceDialect Field Functions 
    bool hasSourceDialect() const { return this->sourceDialect_ != nullptr;};
    void deleteSourceDialect() { this->sourceDialect_ = nullptr;};
    inline string getSourceDialect() const { DARABONBA_PTR_GET_DEFAULT(sourceDialect_, "") };
    inline GetSqlTransTableMetaInfoRequest& setSourceDialect(string sourceDialect) { DARABONBA_PTR_SET_VALUE(sourceDialect_, sourceDialect) };


    // sourceSqlScript Field Functions 
    bool hasSourceSqlScript() const { return this->sourceSqlScript_ != nullptr;};
    void deleteSourceSqlScript() { this->sourceSqlScript_ = nullptr;};
    inline string getSourceSqlScript() const { DARABONBA_PTR_GET_DEFAULT(sourceSqlScript_, "") };
    inline GetSqlTransTableMetaInfoRequest& setSourceSqlScript(string sourceSqlScript) { DARABONBA_PTR_SET_VALUE(sourceSqlScript_, sourceSqlScript) };


    // targetDialect Field Functions 
    bool hasTargetDialect() const { return this->targetDialect_ != nullptr;};
    void deleteTargetDialect() { this->targetDialect_ = nullptr;};
    inline string getTargetDialect() const { DARABONBA_PTR_GET_DEFAULT(targetDialect_, "") };
    inline GetSqlTransTableMetaInfoRequest& setTargetDialect(string targetDialect) { DARABONBA_PTR_SET_VALUE(targetDialect_, targetDialect) };


  protected:
    // The source SQL dialect type.
    shared_ptr<string> sourceDialect_ {};
    // The source script content. You must Base64-encode the script before passing it in. The server decodes the content before parsing.
    shared_ptr<string> sourceSqlScript_ {};
    // The target SQL dialect type.
    shared_ptr<string> targetDialect_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
