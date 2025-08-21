// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDICTINFORMATIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDICTINFORMATIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDictInformationResponseBodyResultOssObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDictInformationResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDictInformationResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(ossObject, ossObject_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDictInformationResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(ossObject, ossObject_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListDictInformationResponseBodyResult() = default ;
    ListDictInformationResponseBodyResult(const ListDictInformationResponseBodyResult &) = default ;
    ListDictInformationResponseBodyResult(ListDictInformationResponseBodyResult &&) = default ;
    ListDictInformationResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDictInformationResponseBodyResult() = default ;
    ListDictInformationResponseBodyResult& operator=(const ListDictInformationResponseBodyResult &) = default ;
    ListDictInformationResponseBodyResult& operator=(ListDictInformationResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSize_ != nullptr
        && this->ossObject_ != nullptr && this->type_ != nullptr; };
    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline ListDictInformationResponseBodyResult& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // ossObject Field Functions 
    bool hasOssObject() const { return this->ossObject_ != nullptr;};
    void deleteOssObject() { this->ossObject_ = nullptr;};
    inline const Models::ListDictInformationResponseBodyResultOssObject & ossObject() const { DARABONBA_PTR_GET_CONST(ossObject_, Models::ListDictInformationResponseBodyResultOssObject) };
    inline Models::ListDictInformationResponseBodyResultOssObject ossObject() { DARABONBA_PTR_GET(ossObject_, Models::ListDictInformationResponseBodyResultOssObject) };
    inline ListDictInformationResponseBodyResult& setOssObject(const Models::ListDictInformationResponseBodyResultOssObject & ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };
    inline ListDictInformationResponseBodyResult& setOssObject(Models::ListDictInformationResponseBodyResultOssObject && ossObject) { DARABONBA_PTR_SET_RVALUE(ossObject_, ossObject) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDictInformationResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<Models::ListDictInformationResponseBodyResultOssObject> ossObject_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
