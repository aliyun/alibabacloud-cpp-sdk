// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOADVANCEREQUESTFILELIST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOADVANCEREQUESTFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class GenerateVideoAdvanceRequestFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoAdvanceRequestFileList& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_TO_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoAdvanceRequestFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_FROM_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GenerateVideoAdvanceRequestFileList() = default ;
    GenerateVideoAdvanceRequestFileList(const GenerateVideoAdvanceRequestFileList &) = default ;
    GenerateVideoAdvanceRequestFileList(GenerateVideoAdvanceRequestFileList &&) = default ;
    GenerateVideoAdvanceRequestFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoAdvanceRequestFileList() = default ;
    GenerateVideoAdvanceRequestFileList& operator=(const GenerateVideoAdvanceRequestFileList &) = default ;
    GenerateVideoAdvanceRequestFileList& operator=(GenerateVideoAdvanceRequestFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->fileUrlObject_ != nullptr && this->type_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GenerateVideoAdvanceRequestFileList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline GenerateVideoAdvanceRequestFileList& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GenerateVideoAdvanceRequestFileList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> fileUrlObject_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
