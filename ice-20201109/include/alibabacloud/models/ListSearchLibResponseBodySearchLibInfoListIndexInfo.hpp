// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHLIBRESPONSEBODYSEARCHLIBINFOLISTINDEXINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHLIBRESPONSEBODYSEARCHLIBINFOLISTINDEXINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSearchLibResponseBodySearchLibInfoListIndexInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchLibResponseBodySearchLibInfoListIndexInfo& obj) { 
      DARABONBA_PTR_TO_JSON(IndexReadiness, indexReadiness_);
      DARABONBA_PTR_TO_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchLibResponseBodySearchLibInfoListIndexInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexReadiness, indexReadiness_);
      DARABONBA_PTR_FROM_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
    };
    ListSearchLibResponseBodySearchLibInfoListIndexInfo() = default ;
    ListSearchLibResponseBodySearchLibInfoListIndexInfo(const ListSearchLibResponseBodySearchLibInfoListIndexInfo &) = default ;
    ListSearchLibResponseBodySearchLibInfoListIndexInfo(ListSearchLibResponseBodySearchLibInfoListIndexInfo &&) = default ;
    ListSearchLibResponseBodySearchLibInfoListIndexInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchLibResponseBodySearchLibInfoListIndexInfo() = default ;
    ListSearchLibResponseBodySearchLibInfoListIndexInfo& operator=(const ListSearchLibResponseBodySearchLibInfoListIndexInfo &) = default ;
    ListSearchLibResponseBodySearchLibInfoListIndexInfo& operator=(ListSearchLibResponseBodySearchLibInfoListIndexInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexReadiness_ != nullptr
        && this->indexStatus_ != nullptr && this->indexType_ != nullptr; };
    // indexReadiness Field Functions 
    bool hasIndexReadiness() const { return this->indexReadiness_ != nullptr;};
    void deleteIndexReadiness() { this->indexReadiness_ = nullptr;};
    inline string indexReadiness() const { DARABONBA_PTR_GET_DEFAULT(indexReadiness_, "") };
    inline ListSearchLibResponseBodySearchLibInfoListIndexInfo& setIndexReadiness(string indexReadiness) { DARABONBA_PTR_SET_VALUE(indexReadiness_, indexReadiness) };


    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string indexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline ListSearchLibResponseBodySearchLibInfoListIndexInfo& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline ListSearchLibResponseBodySearchLibInfoListIndexInfo& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


  protected:
    std::shared_ptr<string> indexReadiness_ = nullptr;
    std::shared_ptr<string> indexStatus_ = nullptr;
    std::shared_ptr<string> indexType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
