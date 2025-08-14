// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTINDEXSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTINDEXSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoListIndexStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoListIndexStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoListIndexStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
    };
    SearchMediaResponseBodyMediaInfoListIndexStatusList() = default ;
    SearchMediaResponseBodyMediaInfoListIndexStatusList(const SearchMediaResponseBodyMediaInfoListIndexStatusList &) = default ;
    SearchMediaResponseBodyMediaInfoListIndexStatusList(SearchMediaResponseBodyMediaInfoListIndexStatusList &&) = default ;
    SearchMediaResponseBodyMediaInfoListIndexStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoListIndexStatusList() = default ;
    SearchMediaResponseBodyMediaInfoListIndexStatusList& operator=(const SearchMediaResponseBodyMediaInfoListIndexStatusList &) = default ;
    SearchMediaResponseBodyMediaInfoListIndexStatusList& operator=(SearchMediaResponseBodyMediaInfoListIndexStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexStatus_ != nullptr
        && this->indexType_ != nullptr; };
    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string indexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline SearchMediaResponseBodyMediaInfoListIndexStatusList& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline SearchMediaResponseBodyMediaInfoListIndexStatusList& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


  protected:
    std::shared_ptr<string> indexStatus_ = nullptr;
    std::shared_ptr<string> indexType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
