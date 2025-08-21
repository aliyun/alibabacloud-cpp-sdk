// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTSPUSHRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTSPUSHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataPushResultResponseBodyPushResultsPushResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataPushResultResponseBodyPushResultsPushResult& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StatusStatS, statusStatS_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataPushResultResponseBodyPushResultsPushResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StatusStatS, statusStatS_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeDataPushResultResponseBodyPushResultsPushResult() = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResult(const DescribeDataPushResultResponseBodyPushResultsPushResult &) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResult(DescribeDataPushResultResponseBodyPushResultsPushResult &&) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataPushResultResponseBodyPushResultsPushResult() = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResult& operator=(const DescribeDataPushResultResponseBodyPushResultsPushResult &) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResult& operator=(DescribeDataPushResultResponseBodyPushResultsPushResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->statusStatS_ != nullptr && this->version_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataPushResultResponseBodyPushResultsPushResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // statusStatS Field Functions 
    bool hasStatusStatS() const { return this->statusStatS_ != nullptr;};
    void deleteStatusStatS() { this->statusStatS_ = nullptr;};
    inline const Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS & statusStatS() const { DARABONBA_PTR_GET_CONST(statusStatS_, Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS) };
    inline Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS statusStatS() { DARABONBA_PTR_GET(statusStatS_, Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResult& setStatusStatS(const Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS & statusStatS) { DARABONBA_PTR_SET_VALUE(statusStatS_, statusStatS) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResult& setStatusStatS(Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS && statusStatS) { DARABONBA_PTR_SET_RVALUE(statusStatS_, statusStatS) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDataPushResultResponseBodyPushResultsPushResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the data file.
    std::shared_ptr<string> name_ = nullptr;
    // The push status of data files.
    std::shared_ptr<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS> statusStatS_ = nullptr;
    // The version number of the data file.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
