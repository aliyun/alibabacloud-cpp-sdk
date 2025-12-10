// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILECNT_HPP_
#define ALIBABACLOUD_MODELS_FILECNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class FileCnt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FileCnt& obj) { 
      DARABONBA_PTR_TO_JSON(Large, large_);
      DARABONBA_PTR_TO_JSON(Middle, middle_);
      DARABONBA_PTR_TO_JSON(Small, small_);
      DARABONBA_PTR_TO_JSON(Tiny, tiny_);
    };
    friend void from_json(const Darabonba::Json& j, FileCnt& obj) { 
      DARABONBA_PTR_FROM_JSON(Large, large_);
      DARABONBA_PTR_FROM_JSON(Middle, middle_);
      DARABONBA_PTR_FROM_JSON(Small, small_);
      DARABONBA_PTR_FROM_JSON(Tiny, tiny_);
    };
    FileCnt() = default ;
    FileCnt(const FileCnt &) = default ;
    FileCnt(FileCnt &&) = default ;
    FileCnt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FileCnt() = default ;
    FileCnt& operator=(const FileCnt &) = default ;
    FileCnt& operator=(FileCnt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->large_ == nullptr
        && return this->middle_ == nullptr && return this->small_ == nullptr && return this->tiny_ == nullptr; };
    // large Field Functions 
    bool hasLarge() const { return this->large_ != nullptr;};
    void deleteLarge() { this->large_ = nullptr;};
    inline int64_t large() const { DARABONBA_PTR_GET_DEFAULT(large_, 0L) };
    inline FileCnt& setLarge(int64_t large) { DARABONBA_PTR_SET_VALUE(large_, large) };


    // middle Field Functions 
    bool hasMiddle() const { return this->middle_ != nullptr;};
    void deleteMiddle() { this->middle_ = nullptr;};
    inline int64_t middle() const { DARABONBA_PTR_GET_DEFAULT(middle_, 0L) };
    inline FileCnt& setMiddle(int64_t middle) { DARABONBA_PTR_SET_VALUE(middle_, middle) };


    // small Field Functions 
    bool hasSmall() const { return this->small_ != nullptr;};
    void deleteSmall() { this->small_ = nullptr;};
    inline int64_t small() const { DARABONBA_PTR_GET_DEFAULT(small_, 0L) };
    inline FileCnt& setSmall(int64_t small) { DARABONBA_PTR_SET_VALUE(small_, small) };


    // tiny Field Functions 
    bool hasTiny() const { return this->tiny_ != nullptr;};
    void deleteTiny() { this->tiny_ = nullptr;};
    inline int64_t tiny() const { DARABONBA_PTR_GET_DEFAULT(tiny_, 0L) };
    inline FileCnt& setTiny(int64_t tiny) { DARABONBA_PTR_SET_VALUE(tiny_, tiny) };


  protected:
    std::shared_ptr<int64_t> large_ = nullptr;
    std::shared_ptr<int64_t> middle_ = nullptr;
    std::shared_ptr<int64_t> small_ = nullptr;
    std::shared_ptr<int64_t> tiny_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
