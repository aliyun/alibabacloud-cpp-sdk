// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWarningConfigResponseBodyDataWarningConfigInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WarningConfigInfo, warningConfigInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WarningConfigInfo, warningConfigInfo_);
    };
    ListWarningConfigResponseBodyData() = default ;
    ListWarningConfigResponseBodyData(const ListWarningConfigResponseBodyData &) = default ;
    ListWarningConfigResponseBodyData(ListWarningConfigResponseBodyData &&) = default ;
    ListWarningConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningConfigResponseBodyData() = default ;
    ListWarningConfigResponseBodyData& operator=(const ListWarningConfigResponseBodyData &) = default ;
    ListWarningConfigResponseBodyData& operator=(ListWarningConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->warningConfigInfo_ != nullptr; };
    // warningConfigInfo Field Functions 
    bool hasWarningConfigInfo() const { return this->warningConfigInfo_ != nullptr;};
    void deleteWarningConfigInfo() { this->warningConfigInfo_ = nullptr;};
    inline const vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfo> & warningConfigInfo() const { DARABONBA_PTR_GET_CONST(warningConfigInfo_, vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfo>) };
    inline vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfo> warningConfigInfo() { DARABONBA_PTR_GET(warningConfigInfo_, vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfo>) };
    inline ListWarningConfigResponseBodyData& setWarningConfigInfo(const vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfo> & warningConfigInfo) { DARABONBA_PTR_SET_VALUE(warningConfigInfo_, warningConfigInfo) };
    inline ListWarningConfigResponseBodyData& setWarningConfigInfo(vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfo> && warningConfigInfo) { DARABONBA_PTR_SET_RVALUE(warningConfigInfo_, warningConfigInfo) };


  protected:
    std::shared_ptr<vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfo>> warningConfigInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
