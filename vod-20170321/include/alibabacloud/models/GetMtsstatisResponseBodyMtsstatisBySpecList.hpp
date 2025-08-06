// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODYMTSSTATISBYSPECLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODYMTSSTATISBYSPECLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMTSStatisResponseBodyMTSStatisBySpecList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMTSStatisResponseBodyMTSStatisBySpecList& obj) { 
      DARABONBA_PTR_TO_JSON(MTSStatisBySpec, MTSStatisBySpec_);
    };
    friend void from_json(const Darabonba::Json& j, GetMTSStatisResponseBodyMTSStatisBySpecList& obj) { 
      DARABONBA_PTR_FROM_JSON(MTSStatisBySpec, MTSStatisBySpec_);
    };
    GetMTSStatisResponseBodyMTSStatisBySpecList() = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecList(const GetMTSStatisResponseBodyMTSStatisBySpecList &) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecList(GetMTSStatisResponseBodyMTSStatisBySpecList &&) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMTSStatisResponseBodyMTSStatisBySpecList() = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecList& operator=(const GetMTSStatisResponseBodyMTSStatisBySpecList &) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecList& operator=(GetMTSStatisResponseBodyMTSStatisBySpecList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->MTSStatisBySpec_ != nullptr; };
    // MTSStatisBySpec Field Functions 
    bool hasMTSStatisBySpec() const { return this->MTSStatisBySpec_ != nullptr;};
    void deleteMTSStatisBySpec() { this->MTSStatisBySpec_ = nullptr;};
    inline const vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec> & MTSStatisBySpec() const { DARABONBA_PTR_GET_CONST(MTSStatisBySpec_, vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec>) };
    inline vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec> MTSStatisBySpec() { DARABONBA_PTR_GET(MTSStatisBySpec_, vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec>) };
    inline GetMTSStatisResponseBodyMTSStatisBySpecList& setMTSStatisBySpec(const vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec> & MTSStatisBySpec) { DARABONBA_PTR_SET_VALUE(MTSStatisBySpec_, MTSStatisBySpec) };
    inline GetMTSStatisResponseBodyMTSStatisBySpecList& setMTSStatisBySpec(vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec> && MTSStatisBySpec) { DARABONBA_PTR_SET_RVALUE(MTSStatisBySpec_, MTSStatisBySpec) };


  protected:
    std::shared_ptr<vector<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec>> MTSStatisBySpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
