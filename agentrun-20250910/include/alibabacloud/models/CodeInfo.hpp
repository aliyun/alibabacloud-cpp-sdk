// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CODEINFO_HPP_
#define ALIBABACLOUD_MODELS_CODEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ossBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(ossObjectName, ossObjectName_);
    };
    friend void from_json(const Darabonba::Json& j, CodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ossBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(ossObjectName, ossObjectName_);
    };
    CodeInfo() = default ;
    CodeInfo(const CodeInfo &) = default ;
    CodeInfo(CodeInfo &&) = default ;
    CodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CodeInfo() = default ;
    CodeInfo& operator=(const CodeInfo &) = default ;
    CodeInfo& operator=(CodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossBucketName_ == nullptr
        && return this->ossObjectName_ == nullptr; };
    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CodeInfo& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string ossObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline CodeInfo& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


  protected:
    std::shared_ptr<string> ossBucketName_ = nullptr;
    std::shared_ptr<string> ossObjectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
