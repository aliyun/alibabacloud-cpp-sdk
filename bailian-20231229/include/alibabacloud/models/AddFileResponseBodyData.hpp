// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
    };
    friend void from_json(const Darabonba::Json& j, AddFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
    };
    AddFileResponseBodyData() = default ;
    AddFileResponseBodyData(const AddFileResponseBodyData &) = default ;
    AddFileResponseBodyData(AddFileResponseBodyData &&) = default ;
    AddFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFileResponseBodyData() = default ;
    AddFileResponseBodyData& operator=(const AddFileResponseBodyData &) = default ;
    AddFileResponseBodyData& operator=(AddFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->parser_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline AddFileResponseBodyData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline AddFileResponseBodyData& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


  protected:
    // The primary key ID of the document. We recommend that you store the ID because it is required for all subsequent API operations related to this document.
    std::shared_ptr<string> fileId_ = nullptr;
    // The parser that is used to parse the document. Valid value:
    // 
    // *   DASHSCOPE_DOCMIND: Intelligent document parsing by Alibaba Cloud.
    std::shared_ptr<string> parser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
