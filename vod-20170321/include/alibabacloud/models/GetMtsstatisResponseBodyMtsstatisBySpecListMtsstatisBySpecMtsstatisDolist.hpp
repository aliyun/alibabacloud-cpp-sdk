// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODYMTSSTATISBYSPECLISTMTSSTATISBYSPECMTSSTATISDOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODYMTSSTATISBYSPECLISTMTSSTATISBYSPECMTSSTATISDOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList& obj) { 
      DARABONBA_PTR_TO_JSON(MTSStatisDO, MTSStatisDO_);
    };
    friend void from_json(const Darabonba::Json& j, GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList& obj) { 
      DARABONBA_PTR_FROM_JSON(MTSStatisDO, MTSStatisDO_);
    };
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList() = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList(const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList &) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList(GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList &&) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList() = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList& operator=(const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList &) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList& operator=(GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->MTSStatisDO_ != nullptr; };
    // MTSStatisDO Field Functions 
    bool hasMTSStatisDO() const { return this->MTSStatisDO_ != nullptr;};
    void deleteMTSStatisDO() { this->MTSStatisDO_ = nullptr;};
    inline const vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO> & MTSStatisDO() const { DARABONBA_PTR_GET_CONST(MTSStatisDO_, vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO>) };
    inline vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO> MTSStatisDO() { DARABONBA_PTR_GET(MTSStatisDO_, vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO>) };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList& setMTSStatisDO(const vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO> & MTSStatisDO) { DARABONBA_PTR_SET_VALUE(MTSStatisDO_, MTSStatisDO) };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList& setMTSStatisDO(vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO> && MTSStatisDO) { DARABONBA_PTR_SET_RVALUE(MTSStatisDO_, MTSStatisDO) };


  protected:
    std::shared_ptr<vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO>> MTSStatisDO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
