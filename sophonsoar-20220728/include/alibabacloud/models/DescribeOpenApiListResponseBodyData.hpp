// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENAPILISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENAPILISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeOpenApiListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenApiListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(Directories, directories_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenApiListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(Directories, directories_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeOpenApiListResponseBodyData() = default ;
    DescribeOpenApiListResponseBodyData(const DescribeOpenApiListResponseBodyData &) = default ;
    DescribeOpenApiListResponseBodyData(DescribeOpenApiListResponseBodyData &&) = default ;
    DescribeOpenApiListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenApiListResponseBodyData() = default ;
    DescribeOpenApiListResponseBodyData& operator=(const DescribeOpenApiListResponseBodyData &) = default ;
    DescribeOpenApiListResponseBodyData& operator=(DescribeOpenApiListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->directories_ == nullptr && return this->version_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeOpenApiListResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directories Field Functions 
    bool hasDirectories() const { return this->directories_ != nullptr;};
    void deleteDirectories() { this->directories_ = nullptr;};
    inline     const Darabonba::Json & directories() const { DARABONBA_GET(directories_) };
    Darabonba::Json & directories() { DARABONBA_GET(directories_) };
    inline DescribeOpenApiListResponseBodyData& setDirectories(const Darabonba::Json & directories) { DARABONBA_SET_VALUE(directories_, directories) };
    inline DescribeOpenApiListResponseBodyData& setDirectories(Darabonba::Json & directories) { DARABONBA_SET_RVALUE(directories_, directories) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeOpenApiListResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The response code. Valid values:
    // 
    // *   200: successful.
    // *   500: failed.
    std::shared_ptr<string> code_ = nullptr;
    // The information about the returned APIs.
    Darabonba::Json directories_ = nullptr;
    // The version number of the API.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
