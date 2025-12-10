// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLERESOURCETABLESD_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLERESOURCETABLESD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/LifecycleResourceTableSdSerDeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LifecycleResourceTableSd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecycleResourceTableSd& obj) { 
      DARABONBA_PTR_TO_JSON(BucketCols, bucketCols_);
      DARABONBA_PTR_TO_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SerDeInfo, serDeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, LifecycleResourceTableSd& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketCols, bucketCols_);
      DARABONBA_PTR_FROM_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(SerDeInfo, serDeInfo_);
    };
    LifecycleResourceTableSd() = default ;
    LifecycleResourceTableSd(const LifecycleResourceTableSd &) = default ;
    LifecycleResourceTableSd(LifecycleResourceTableSd &&) = default ;
    LifecycleResourceTableSd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecycleResourceTableSd() = default ;
    LifecycleResourceTableSd& operator=(const LifecycleResourceTableSd &) = default ;
    LifecycleResourceTableSd& operator=(LifecycleResourceTableSd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketCols_ == nullptr
        && return this->inputFormat_ == nullptr && return this->location_ == nullptr && return this->outputFormat_ == nullptr && return this->parameters_ == nullptr && return this->serDeInfo_ == nullptr; };
    // bucketCols Field Functions 
    bool hasBucketCols() const { return this->bucketCols_ != nullptr;};
    void deleteBucketCols() { this->bucketCols_ = nullptr;};
    inline const vector<string> & bucketCols() const { DARABONBA_PTR_GET_CONST(bucketCols_, vector<string>) };
    inline vector<string> bucketCols() { DARABONBA_PTR_GET(bucketCols_, vector<string>) };
    inline LifecycleResourceTableSd& setBucketCols(const vector<string> & bucketCols) { DARABONBA_PTR_SET_VALUE(bucketCols_, bucketCols) };
    inline LifecycleResourceTableSd& setBucketCols(vector<string> && bucketCols) { DARABONBA_PTR_SET_RVALUE(bucketCols_, bucketCols) };


    // inputFormat Field Functions 
    bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
    void deleteInputFormat() { this->inputFormat_ = nullptr;};
    inline string inputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
    inline LifecycleResourceTableSd& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline LifecycleResourceTableSd& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline LifecycleResourceTableSd& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline LifecycleResourceTableSd& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline LifecycleResourceTableSd& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // serDeInfo Field Functions 
    bool hasSerDeInfo() const { return this->serDeInfo_ != nullptr;};
    void deleteSerDeInfo() { this->serDeInfo_ = nullptr;};
    inline const Models::LifecycleResourceTableSdSerDeInfo & serDeInfo() const { DARABONBA_PTR_GET_CONST(serDeInfo_, Models::LifecycleResourceTableSdSerDeInfo) };
    inline Models::LifecycleResourceTableSdSerDeInfo serDeInfo() { DARABONBA_PTR_GET(serDeInfo_, Models::LifecycleResourceTableSdSerDeInfo) };
    inline LifecycleResourceTableSd& setSerDeInfo(const Models::LifecycleResourceTableSdSerDeInfo & serDeInfo) { DARABONBA_PTR_SET_VALUE(serDeInfo_, serDeInfo) };
    inline LifecycleResourceTableSd& setSerDeInfo(Models::LifecycleResourceTableSdSerDeInfo && serDeInfo) { DARABONBA_PTR_SET_RVALUE(serDeInfo_, serDeInfo) };


  protected:
    std::shared_ptr<vector<string>> bucketCols_ = nullptr;
    std::shared_ptr<string> inputFormat_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<Models::LifecycleResourceTableSdSerDeInfo> serDeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
