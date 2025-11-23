// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSDETAILRESPONSEBODYSENSITIVECOLUMNSDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSDETAILRESPONSEBODYSENSITIVECOLUMNSDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(SensitiveColumnsDetail, sensitiveColumnsDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(SensitiveColumnsDetail, sensitiveColumnsDetail_);
    };
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList() = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList(const ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList &) = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList(ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList &&) = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList() = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList& operator=(const ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList &) = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList& operator=(ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sensitiveColumnsDetail_ == nullptr; };
    // sensitiveColumnsDetail Field Functions 
    bool hasSensitiveColumnsDetail() const { return this->sensitiveColumnsDetail_ != nullptr;};
    void deleteSensitiveColumnsDetail() { this->sensitiveColumnsDetail_ = nullptr;};
    inline const vector<Models::ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail> & sensitiveColumnsDetail() const { DARABONBA_PTR_GET_CONST(sensitiveColumnsDetail_, vector<Models::ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail>) };
    inline vector<Models::ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail> sensitiveColumnsDetail() { DARABONBA_PTR_GET(sensitiveColumnsDetail_, vector<Models::ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail>) };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList& setSensitiveColumnsDetail(const vector<Models::ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail> & sensitiveColumnsDetail) { DARABONBA_PTR_SET_VALUE(sensitiveColumnsDetail_, sensitiveColumnsDetail) };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList& setSensitiveColumnsDetail(vector<Models::ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail> && sensitiveColumnsDetail) { DARABONBA_PTR_SET_RVALUE(sensitiveColumnsDetail_, sensitiveColumnsDetail) };


  protected:
    std::shared_ptr<vector<Models::ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail>> sensitiveColumnsDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
