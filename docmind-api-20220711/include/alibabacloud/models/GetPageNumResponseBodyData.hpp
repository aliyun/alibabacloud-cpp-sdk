// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGENUMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPAGENUMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class GetPageNumResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPageNumResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetPageNumResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
    };
    GetPageNumResponseBodyData() = default ;
    GetPageNumResponseBodyData(const GetPageNumResponseBodyData &) = default ;
    GetPageNumResponseBodyData(GetPageNumResponseBodyData &&) = default ;
    GetPageNumResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPageNumResponseBodyData() = default ;
    GetPageNumResponseBodyData& operator=(const GetPageNumResponseBodyData &) = default ;
    GetPageNumResponseBodyData& operator=(GetPageNumResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNum_ != nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetPageNumResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


  protected:
    std::shared_ptr<int32_t> pageNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
