// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafScenesResponseBodyDefenseScenes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScenes, defenseScenes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScenes, defenseScenes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafScenesResponseBody() = default ;
    DescribeDcdnWafScenesResponseBody(const DescribeDcdnWafScenesResponseBody &) = default ;
    DescribeDcdnWafScenesResponseBody(DescribeDcdnWafScenesResponseBody &&) = default ;
    DescribeDcdnWafScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafScenesResponseBody() = default ;
    DescribeDcdnWafScenesResponseBody& operator=(const DescribeDcdnWafScenesResponseBody &) = default ;
    DescribeDcdnWafScenesResponseBody& operator=(DescribeDcdnWafScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScenes_ != nullptr
        && this->requestId_ != nullptr; };
    // defenseScenes Field Functions 
    bool hasDefenseScenes() const { return this->defenseScenes_ != nullptr;};
    void deleteDefenseScenes() { this->defenseScenes_ = nullptr;};
    inline const vector<DescribeDcdnWafScenesResponseBodyDefenseScenes> & defenseScenes() const { DARABONBA_PTR_GET_CONST(defenseScenes_, vector<DescribeDcdnWafScenesResponseBodyDefenseScenes>) };
    inline vector<DescribeDcdnWafScenesResponseBodyDefenseScenes> defenseScenes() { DARABONBA_PTR_GET(defenseScenes_, vector<DescribeDcdnWafScenesResponseBodyDefenseScenes>) };
    inline DescribeDcdnWafScenesResponseBody& setDefenseScenes(const vector<DescribeDcdnWafScenesResponseBodyDefenseScenes> & defenseScenes) { DARABONBA_PTR_SET_VALUE(defenseScenes_, defenseScenes) };
    inline DescribeDcdnWafScenesResponseBody& setDefenseScenes(vector<DescribeDcdnWafScenesResponseBodyDefenseScenes> && defenseScenes) { DARABONBA_PTR_SET_RVALUE(defenseScenes_, defenseScenes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types of the protection policies.
    std::shared_ptr<vector<DescribeDcdnWafScenesResponseBodyDefenseScenes>> defenseScenes_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
