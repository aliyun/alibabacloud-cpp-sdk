// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDICTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDICTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class ListDictsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDictsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDictsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListDictsResponseBodyResult() = default ;
    ListDictsResponseBodyResult(const ListDictsResponseBodyResult &) = default ;
    ListDictsResponseBodyResult(ListDictsResponseBodyResult &&) = default ;
    ListDictsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDictsResponseBodyResult() = default ;
    ListDictsResponseBodyResult& operator=(const ListDictsResponseBodyResult &) = default ;
    ListDictsResponseBodyResult& operator=(ListDictsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadUrl_ != nullptr
        && this->name_ != nullptr && this->sourceType_ != nullptr && this->type_ != nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline ListDictsResponseBodyResult& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDictsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListDictsResponseBodyResult& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDictsResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
