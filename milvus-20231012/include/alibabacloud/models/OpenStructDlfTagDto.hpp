// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTDLFTAGDTO_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTDLFTAGDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class OpenStructDlfTagDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructDlfTagDto& obj) { 
      DARABONBA_PTR_TO_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
      DARABONBA_PTR_TO_JSON(timeMillis, timeMillis_);
      DARABONBA_PTR_TO_JSON(totalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructDlfTagDto& obj) { 
      DARABONBA_PTR_FROM_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
      DARABONBA_PTR_FROM_JSON(timeMillis, timeMillis_);
      DARABONBA_PTR_FROM_JSON(totalRecordCount, totalRecordCount_);
    };
    OpenStructDlfTagDto() = default ;
    OpenStructDlfTagDto(const OpenStructDlfTagDto &) = default ;
    OpenStructDlfTagDto(OpenStructDlfTagDto &&) = default ;
    OpenStructDlfTagDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructDlfTagDto() = default ;
    OpenStructDlfTagDto& operator=(const OpenStructDlfTagDto &) = default ;
    OpenStructDlfTagDto& operator=(OpenStructDlfTagDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshotId_ == nullptr
        && this->tagName_ == nullptr && this->timeMillis_ == nullptr && this->totalRecordCount_ == nullptr; };
    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline int64_t getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, 0L) };
    inline OpenStructDlfTagDto& setSnapshotId(int64_t snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline OpenStructDlfTagDto& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // timeMillis Field Functions 
    bool hasTimeMillis() const { return this->timeMillis_ != nullptr;};
    void deleteTimeMillis() { this->timeMillis_ = nullptr;};
    inline int64_t getTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(timeMillis_, 0L) };
    inline OpenStructDlfTagDto& setTimeMillis(int64_t timeMillis) { DARABONBA_PTR_SET_VALUE(timeMillis_, timeMillis) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline OpenStructDlfTagDto& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<int64_t> snapshotId_ {};
    shared_ptr<string> tagName_ {};
    shared_ptr<int64_t> timeMillis_ {};
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
