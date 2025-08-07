// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READNUMGROUPTOTALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_READNUMGROUPTOTALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadNumGroupTotalResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadNumGroupTotalResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UnReadCount, unReadCount_);
    };
    friend void from_json(const Darabonba::Json& j, ReadNumGroupTotalResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UnReadCount, unReadCount_);
    };
    ReadNumGroupTotalResponseBodyData() = default ;
    ReadNumGroupTotalResponseBodyData(const ReadNumGroupTotalResponseBodyData &) = default ;
    ReadNumGroupTotalResponseBodyData(ReadNumGroupTotalResponseBodyData &&) = default ;
    ReadNumGroupTotalResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadNumGroupTotalResponseBodyData() = default ;
    ReadNumGroupTotalResponseBodyData& operator=(const ReadNumGroupTotalResponseBodyData &) = default ;
    ReadNumGroupTotalResponseBodyData& operator=(ReadNumGroupTotalResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->readCount_ != nullptr && this->totalCount_ != nullptr && this->unReadCount_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ReadNumGroupTotalResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // readCount Field Functions 
    bool hasReadCount() const { return this->readCount_ != nullptr;};
    void deleteReadCount() { this->readCount_ = nullptr;};
    inline int64_t readCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
    inline ReadNumGroupTotalResponseBodyData& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ReadNumGroupTotalResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unReadCount Field Functions 
    bool hasUnReadCount() const { return this->unReadCount_ != nullptr;};
    void deleteUnReadCount() { this->unReadCount_ = nullptr;};
    inline int64_t unReadCount() const { DARABONBA_PTR_GET_DEFAULT(unReadCount_, 0L) };
    inline ReadNumGroupTotalResponseBodyData& setUnReadCount(int64_t unReadCount) { DARABONBA_PTR_SET_VALUE(unReadCount_, unReadCount) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> readCount_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> unReadCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
