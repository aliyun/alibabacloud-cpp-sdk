// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYRESPONSEBODYDATAINDEXSETTINGRECALLSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYRESPONSEBODYDATAINDEXSETTINGRECALLSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryResponseBodyDataIndexSettingRecallStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryResponseBodyDataIndexSettingRecallStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(documentRankType, documentRankType_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryResponseBodyDataIndexSettingRecallStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(documentRankType, documentRankType_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
    };
    GetLibraryResponseBodyDataIndexSettingRecallStrategy() = default ;
    GetLibraryResponseBodyDataIndexSettingRecallStrategy(const GetLibraryResponseBodyDataIndexSettingRecallStrategy &) = default ;
    GetLibraryResponseBodyDataIndexSettingRecallStrategy(GetLibraryResponseBodyDataIndexSettingRecallStrategy &&) = default ;
    GetLibraryResponseBodyDataIndexSettingRecallStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryResponseBodyDataIndexSettingRecallStrategy() = default ;
    GetLibraryResponseBodyDataIndexSettingRecallStrategy& operator=(const GetLibraryResponseBodyDataIndexSettingRecallStrategy &) = default ;
    GetLibraryResponseBodyDataIndexSettingRecallStrategy& operator=(GetLibraryResponseBodyDataIndexSettingRecallStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentRankType_ == nullptr
        && return this->limit_ == nullptr; };
    // documentRankType Field Functions 
    bool hasDocumentRankType() const { return this->documentRankType_ != nullptr;};
    void deleteDocumentRankType() { this->documentRankType_ = nullptr;};
    inline string documentRankType() const { DARABONBA_PTR_GET_DEFAULT(documentRankType_, "") };
    inline GetLibraryResponseBodyDataIndexSettingRecallStrategy& setDocumentRankType(string documentRankType) { DARABONBA_PTR_SET_VALUE(documentRankType_, documentRankType) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline GetLibraryResponseBodyDataIndexSettingRecallStrategy& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    std::shared_ptr<string> documentRankType_ = nullptr;
    std::shared_ptr<int32_t> limit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
