// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECENTERTRANSFERRESPONSEBODYLIVECENTERTRANSFERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECENTERTRANSFERRESPONSEBODYLIVECENTERTRANSFERINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveCenterTransferInfo, liveCenterTransferInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveCenterTransferInfo, liveCenterTransferInfo_);
    };
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList() = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList(const DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList &) = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList(DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList &&) = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList() = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList& operator=(const DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList &) = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList& operator=(DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveCenterTransferInfo_ == nullptr; };
    // liveCenterTransferInfo Field Functions 
    bool hasLiveCenterTransferInfo() const { return this->liveCenterTransferInfo_ != nullptr;};
    void deleteLiveCenterTransferInfo() { this->liveCenterTransferInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo> & liveCenterTransferInfo() const { DARABONBA_PTR_GET_CONST(liveCenterTransferInfo_, vector<Models::DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo>) };
    inline vector<Models::DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo> liveCenterTransferInfo() { DARABONBA_PTR_GET(liveCenterTransferInfo_, vector<Models::DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo>) };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList& setLiveCenterTransferInfo(const vector<Models::DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo> & liveCenterTransferInfo) { DARABONBA_PTR_SET_VALUE(liveCenterTransferInfo_, liveCenterTransferInfo) };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList& setLiveCenterTransferInfo(vector<Models::DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo> && liveCenterTransferInfo) { DARABONBA_PTR_SET_RVALUE(liveCenterTransferInfo_, liveCenterTransferInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo>> liveCenterTransferInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
