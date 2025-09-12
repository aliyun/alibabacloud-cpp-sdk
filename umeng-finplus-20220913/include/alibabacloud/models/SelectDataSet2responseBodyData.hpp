// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTDATASET2RESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SELECTDATASET2RESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectDataSet2ResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectDataSet2ResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(lineNum, lineNum_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ossFileCount, ossFileCount_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusMsg, statusMsg_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SelectDataSet2ResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(lineNum, lineNum_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ossFileCount, ossFileCount_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusMsg, statusMsg_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    SelectDataSet2ResponseBodyData() = default ;
    SelectDataSet2ResponseBodyData(const SelectDataSet2ResponseBodyData &) = default ;
    SelectDataSet2ResponseBodyData(SelectDataSet2ResponseBodyData &&) = default ;
    SelectDataSet2ResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectDataSet2ResponseBodyData() = default ;
    SelectDataSet2ResponseBodyData& operator=(const SelectDataSet2ResponseBodyData &) = default ;
    SelectDataSet2ResponseBodyData& operator=(SelectDataSet2ResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->datasetId_ != nullptr && this->lineNum_ != nullptr && this->name_ != nullptr && this->ossFileCount_ != nullptr && this->status_ != nullptr
        && this->statusMsg_ != nullptr && this->type_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SelectDataSet2ResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline SelectDataSet2ResponseBodyData& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // lineNum Field Functions 
    bool hasLineNum() const { return this->lineNum_ != nullptr;};
    void deleteLineNum() { this->lineNum_ = nullptr;};
    inline int64_t lineNum() const { DARABONBA_PTR_GET_DEFAULT(lineNum_, 0L) };
    inline SelectDataSet2ResponseBodyData& setLineNum(int64_t lineNum) { DARABONBA_PTR_SET_VALUE(lineNum_, lineNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SelectDataSet2ResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossFileCount Field Functions 
    bool hasOssFileCount() const { return this->ossFileCount_ != nullptr;};
    void deleteOssFileCount() { this->ossFileCount_ = nullptr;};
    inline int64_t ossFileCount() const { DARABONBA_PTR_GET_DEFAULT(ossFileCount_, 0L) };
    inline SelectDataSet2ResponseBodyData& setOssFileCount(int64_t ossFileCount) { DARABONBA_PTR_SET_VALUE(ossFileCount_, ossFileCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SelectDataSet2ResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMsg Field Functions 
    bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
    void deleteStatusMsg() { this->statusMsg_ = nullptr;};
    inline string statusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
    inline SelectDataSet2ResponseBodyData& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SelectDataSet2ResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<int64_t> lineNum_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ossFileCount_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusMsg_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
