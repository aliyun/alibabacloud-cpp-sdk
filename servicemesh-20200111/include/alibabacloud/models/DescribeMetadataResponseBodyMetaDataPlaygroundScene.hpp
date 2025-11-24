// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETADATARESPONSEBODYMETADATAPLAYGROUNDSCENE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETADATARESPONSEBODYMETADATAPLAYGROUNDSCENE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeMetadataResponseBodyMetaDataPlaygroundScene : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetadataResponseBodyMetaDataPlaygroundScene& obj) { 
      DARABONBA_PTR_TO_JSON(observability, observability_);
      DARABONBA_PTR_TO_JSON(other, other_);
      DARABONBA_PTR_TO_JSON(security, security_);
      DARABONBA_PTR_TO_JSON(trafficManagement, trafficManagement_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetadataResponseBodyMetaDataPlaygroundScene& obj) { 
      DARABONBA_PTR_FROM_JSON(observability, observability_);
      DARABONBA_PTR_FROM_JSON(other, other_);
      DARABONBA_PTR_FROM_JSON(security, security_);
      DARABONBA_PTR_FROM_JSON(trafficManagement, trafficManagement_);
    };
    DescribeMetadataResponseBodyMetaDataPlaygroundScene() = default ;
    DescribeMetadataResponseBodyMetaDataPlaygroundScene(const DescribeMetadataResponseBodyMetaDataPlaygroundScene &) = default ;
    DescribeMetadataResponseBodyMetaDataPlaygroundScene(DescribeMetadataResponseBodyMetaDataPlaygroundScene &&) = default ;
    DescribeMetadataResponseBodyMetaDataPlaygroundScene(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetadataResponseBodyMetaDataPlaygroundScene() = default ;
    DescribeMetadataResponseBodyMetaDataPlaygroundScene& operator=(const DescribeMetadataResponseBodyMetaDataPlaygroundScene &) = default ;
    DescribeMetadataResponseBodyMetaDataPlaygroundScene& operator=(DescribeMetadataResponseBodyMetaDataPlaygroundScene &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->observability_ == nullptr
        && return this->other_ == nullptr && return this->security_ == nullptr && return this->trafficManagement_ == nullptr; };
    // observability Field Functions 
    bool hasObservability() const { return this->observability_ != nullptr;};
    void deleteObservability() { this->observability_ = nullptr;};
    inline const vector<string> & observability() const { DARABONBA_PTR_GET_CONST(observability_, vector<string>) };
    inline vector<string> observability() { DARABONBA_PTR_GET(observability_, vector<string>) };
    inline DescribeMetadataResponseBodyMetaDataPlaygroundScene& setObservability(const vector<string> & observability) { DARABONBA_PTR_SET_VALUE(observability_, observability) };
    inline DescribeMetadataResponseBodyMetaDataPlaygroundScene& setObservability(vector<string> && observability) { DARABONBA_PTR_SET_RVALUE(observability_, observability) };


    // other Field Functions 
    bool hasOther() const { return this->other_ != nullptr;};
    void deleteOther() { this->other_ = nullptr;};
    inline const vector<string> & other() const { DARABONBA_PTR_GET_CONST(other_, vector<string>) };
    inline vector<string> other() { DARABONBA_PTR_GET(other_, vector<string>) };
    inline DescribeMetadataResponseBodyMetaDataPlaygroundScene& setOther(const vector<string> & other) { DARABONBA_PTR_SET_VALUE(other_, other) };
    inline DescribeMetadataResponseBodyMetaDataPlaygroundScene& setOther(vector<string> && other) { DARABONBA_PTR_SET_RVALUE(other_, other) };


    // security Field Functions 
    bool hasSecurity() const { return this->security_ != nullptr;};
    void deleteSecurity() { this->security_ = nullptr;};
    inline const vector<string> & security() const { DARABONBA_PTR_GET_CONST(security_, vector<string>) };
    inline vector<string> security() { DARABONBA_PTR_GET(security_, vector<string>) };
    inline DescribeMetadataResponseBodyMetaDataPlaygroundScene& setSecurity(const vector<string> & security) { DARABONBA_PTR_SET_VALUE(security_, security) };
    inline DescribeMetadataResponseBodyMetaDataPlaygroundScene& setSecurity(vector<string> && security) { DARABONBA_PTR_SET_RVALUE(security_, security) };


    // trafficManagement Field Functions 
    bool hasTrafficManagement() const { return this->trafficManagement_ != nullptr;};
    void deleteTrafficManagement() { this->trafficManagement_ = nullptr;};
    inline const vector<string> & trafficManagement() const { DARABONBA_PTR_GET_CONST(trafficManagement_, vector<string>) };
    inline vector<string> trafficManagement() { DARABONBA_PTR_GET(trafficManagement_, vector<string>) };
    inline DescribeMetadataResponseBodyMetaDataPlaygroundScene& setTrafficManagement(const vector<string> & trafficManagement) { DARABONBA_PTR_SET_VALUE(trafficManagement_, trafficManagement) };
    inline DescribeMetadataResponseBodyMetaDataPlaygroundScene& setTrafficManagement(vector<string> && trafficManagement) { DARABONBA_PTR_SET_RVALUE(trafficManagement_, trafficManagement) };


  protected:
    // The observability scenarios.
    std::shared_ptr<vector<string>> observability_ = nullptr;
    // Other scenarios.
    std::shared_ptr<vector<string>> other_ = nullptr;
    // The security scenarios.
    std::shared_ptr<vector<string>> security_ = nullptr;
    // The traffic management scenarios.
    std::shared_ptr<vector<string>> trafficManagement_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
