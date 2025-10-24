// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTRESPONSEBODYFILECONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTRESPONSEBODYFILECONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVerifyContentResponseBodyFileContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyContentResponseBodyFileContent& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(TopDomain, topDomain_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(VerifyPath, verifyPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyContentResponseBodyFileContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(TopDomain, topDomain_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(VerifyPath, verifyPath_);
    };
    DescribeVerifyContentResponseBodyFileContent() = default ;
    DescribeVerifyContentResponseBodyFileContent(const DescribeVerifyContentResponseBodyFileContent &) = default ;
    DescribeVerifyContentResponseBodyFileContent(DescribeVerifyContentResponseBodyFileContent &&) = default ;
    DescribeVerifyContentResponseBodyFileContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyContentResponseBodyFileContent() = default ;
    DescribeVerifyContentResponseBodyFileContent& operator=(const DescribeVerifyContentResponseBodyFileContent &) = default ;
    DescribeVerifyContentResponseBodyFileContent& operator=(DescribeVerifyContentResponseBodyFileContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && return this->fileName_ == nullptr && return this->topDomain_ == nullptr && return this->value_ == nullptr && return this->verifyPath_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeVerifyContentResponseBodyFileContent& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeVerifyContentResponseBodyFileContent& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // topDomain Field Functions 
    bool hasTopDomain() const { return this->topDomain_ != nullptr;};
    void deleteTopDomain() { this->topDomain_ = nullptr;};
    inline string topDomain() const { DARABONBA_PTR_GET_DEFAULT(topDomain_, "") };
    inline DescribeVerifyContentResponseBodyFileContent& setTopDomain(string topDomain) { DARABONBA_PTR_SET_VALUE(topDomain_, topDomain) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVerifyContentResponseBodyFileContent& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // verifyPath Field Functions 
    bool hasVerifyPath() const { return this->verifyPath_ != nullptr;};
    void deleteVerifyPath() { this->verifyPath_ = nullptr;};
    inline string verifyPath() const { DARABONBA_PTR_GET_DEFAULT(verifyPath_, "") };
    inline DescribeVerifyContentResponseBodyFileContent& setVerifyPath(string verifyPath) { DARABONBA_PTR_SET_VALUE(verifyPath_, verifyPath) };


  protected:
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> topDomain_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> verifyPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
