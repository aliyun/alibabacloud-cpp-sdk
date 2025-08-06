// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIADNALIBSRESPONSEBODYAIDNALIBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIADNALIBSRESPONSEBODYAIDNALIBINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaDNALibsResponseBodyAIDNALibInfoListAIDNALibInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListMediaDNALibsResponseBodyAIDNALibInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaDNALibsResponseBodyAIDNALibInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AIDNALibInfo, AIDNALibInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaDNALibsResponseBodyAIDNALibInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIDNALibInfo, AIDNALibInfo_);
    };
    ListMediaDNALibsResponseBodyAIDNALibInfoList() = default ;
    ListMediaDNALibsResponseBodyAIDNALibInfoList(const ListMediaDNALibsResponseBodyAIDNALibInfoList &) = default ;
    ListMediaDNALibsResponseBodyAIDNALibInfoList(ListMediaDNALibsResponseBodyAIDNALibInfoList &&) = default ;
    ListMediaDNALibsResponseBodyAIDNALibInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaDNALibsResponseBodyAIDNALibInfoList() = default ;
    ListMediaDNALibsResponseBodyAIDNALibInfoList& operator=(const ListMediaDNALibsResponseBodyAIDNALibInfoList &) = default ;
    ListMediaDNALibsResponseBodyAIDNALibInfoList& operator=(ListMediaDNALibsResponseBodyAIDNALibInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIDNALibInfo_ != nullptr; };
    // AIDNALibInfo Field Functions 
    bool hasAIDNALibInfo() const { return this->AIDNALibInfo_ != nullptr;};
    void deleteAIDNALibInfo() { this->AIDNALibInfo_ = nullptr;};
    inline const vector<Models::ListMediaDNALibsResponseBodyAIDNALibInfoListAIDNALibInfo> & AIDNALibInfo() const { DARABONBA_PTR_GET_CONST(AIDNALibInfo_, vector<Models::ListMediaDNALibsResponseBodyAIDNALibInfoListAIDNALibInfo>) };
    inline vector<Models::ListMediaDNALibsResponseBodyAIDNALibInfoListAIDNALibInfo> AIDNALibInfo() { DARABONBA_PTR_GET(AIDNALibInfo_, vector<Models::ListMediaDNALibsResponseBodyAIDNALibInfoListAIDNALibInfo>) };
    inline ListMediaDNALibsResponseBodyAIDNALibInfoList& setAIDNALibInfo(const vector<Models::ListMediaDNALibsResponseBodyAIDNALibInfoListAIDNALibInfo> & AIDNALibInfo) { DARABONBA_PTR_SET_VALUE(AIDNALibInfo_, AIDNALibInfo) };
    inline ListMediaDNALibsResponseBodyAIDNALibInfoList& setAIDNALibInfo(vector<Models::ListMediaDNALibsResponseBodyAIDNALibInfoListAIDNALibInfo> && AIDNALibInfo) { DARABONBA_PTR_SET_RVALUE(AIDNALibInfo_, AIDNALibInfo) };


  protected:
    std::shared_ptr<vector<Models::ListMediaDNALibsResponseBodyAIDNALibInfoListAIDNALibInfo>> AIDNALibInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
