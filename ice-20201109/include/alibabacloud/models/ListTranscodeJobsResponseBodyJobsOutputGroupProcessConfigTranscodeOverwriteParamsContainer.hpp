// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSCONTAINER_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSCONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


  protected:
    // The container format.
    std::shared_ptr<string> format_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
