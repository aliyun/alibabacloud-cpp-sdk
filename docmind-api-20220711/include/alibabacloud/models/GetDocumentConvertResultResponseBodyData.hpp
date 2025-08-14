// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTCONVERTRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTCONVERTRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class GetDocumentConvertResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentConvertResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentConvertResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetDocumentConvertResultResponseBodyData() = default ;
    GetDocumentConvertResultResponseBodyData(const GetDocumentConvertResultResponseBodyData &) = default ;
    GetDocumentConvertResultResponseBodyData(GetDocumentConvertResultResponseBodyData &&) = default ;
    GetDocumentConvertResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentConvertResultResponseBodyData() = default ;
    GetDocumentConvertResultResponseBodyData& operator=(const GetDocumentConvertResultResponseBodyData &) = default ;
    GetDocumentConvertResultResponseBodyData& operator=(GetDocumentConvertResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->md5_ != nullptr
        && this->size_ != nullptr && this->type_ != nullptr && this->url_ != nullptr; };
    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline GetDocumentConvertResultResponseBodyData& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetDocumentConvertResultResponseBodyData& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDocumentConvertResultResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetDocumentConvertResultResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
