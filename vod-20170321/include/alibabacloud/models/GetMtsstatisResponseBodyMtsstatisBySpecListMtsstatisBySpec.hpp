// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODYMTSSTATISBYSPECLISTMTSSTATISBYSPEC_HPP_
#define ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODYMTSSTATISBYSPECLISTMTSSTATISBYSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec& obj) { 
      DARABONBA_PTR_TO_JSON(MTSStatisDOList, MTSStatisDOList_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
    };
    friend void from_json(const Darabonba::Json& j, GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec& obj) { 
      DARABONBA_PTR_FROM_JSON(MTSStatisDOList, MTSStatisDOList_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
    };
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec() = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec(const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec &) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec(GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec &&) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec() = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec& operator=(const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec &) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec& operator=(GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->MTSStatisDOList_ != nullptr
        && this->specification_ != nullptr; };
    // MTSStatisDOList Field Functions 
    bool hasMTSStatisDOList() const { return this->MTSStatisDOList_ != nullptr;};
    void deleteMTSStatisDOList() { this->MTSStatisDOList_ = nullptr;};
    inline const Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList & MTSStatisDOList() const { DARABONBA_PTR_GET_CONST(MTSStatisDOList_, Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList) };
    inline Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList MTSStatisDOList() { DARABONBA_PTR_GET(MTSStatisDOList_, Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList) };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec& setMTSStatisDOList(const Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList & MTSStatisDOList) { DARABONBA_PTR_SET_VALUE(MTSStatisDOList_, MTSStatisDOList) };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec& setMTSStatisDOList(Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList && MTSStatisDOList) { DARABONBA_PTR_SET_RVALUE(MTSStatisDOList_, MTSStatisDOList) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpec& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


  protected:
    std::shared_ptr<Models::GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOList> MTSStatisDOList_ = nullptr;
    std::shared_ptr<string> specification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
