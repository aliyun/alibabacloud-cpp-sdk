// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGCONTENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGCONTENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLogContentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogContentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(length, length_);
      DARABONBA_PTR_TO_JSON(offset, offset_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogContentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(length, length_);
      DARABONBA_PTR_FROM_JSON(offset, offset_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListLogContentsRequest() = default ;
    ListLogContentsRequest(const ListLogContentsRequest &) = default ;
    ListLogContentsRequest(ListLogContentsRequest &&) = default ;
    ListLogContentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogContentsRequest() = default ;
    ListLogContentsRequest& operator=(const ListLogContentsRequest &) = default ;
    ListLogContentsRequest& operator=(ListLogContentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->length_ != nullptr && this->offset_ != nullptr && this->regionId_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListLogContentsRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline ListLogContentsRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ListLogContentsRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListLogContentsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Full path of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // Length of the log.
    std::shared_ptr<int32_t> length_ = nullptr;
    // Start line for query.
    std::shared_ptr<int32_t> offset_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
