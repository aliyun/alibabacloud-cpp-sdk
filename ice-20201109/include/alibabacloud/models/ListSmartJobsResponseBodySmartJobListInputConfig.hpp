// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODYSMARTJOBLISTINPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODYSMARTJOBLISTINPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartJobsResponseBodySmartJobListInputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartJobsResponseBodySmartJobListInputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartJobsResponseBodySmartJobListInputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
    };
    ListSmartJobsResponseBodySmartJobListInputConfig() = default ;
    ListSmartJobsResponseBodySmartJobListInputConfig(const ListSmartJobsResponseBodySmartJobListInputConfig &) = default ;
    ListSmartJobsResponseBodySmartJobListInputConfig(ListSmartJobsResponseBodySmartJobListInputConfig &&) = default ;
    ListSmartJobsResponseBodySmartJobListInputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartJobsResponseBodySmartJobListInputConfig() = default ;
    ListSmartJobsResponseBodySmartJobListInputConfig& operator=(const ListSmartJobsResponseBodySmartJobListInputConfig &) = default ;
    ListSmartJobsResponseBodySmartJobListInputConfig& operator=(ListSmartJobsResponseBodySmartJobListInputConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputFile_ != nullptr
        && this->keyword_ != nullptr; };
    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline string inputFile() const { DARABONBA_PTR_GET_DEFAULT(inputFile_, "") };
    inline ListSmartJobsResponseBodySmartJobListInputConfig& setInputFile(string inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListSmartJobsResponseBodySmartJobListInputConfig& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


  protected:
    // The information about the input file.
    std::shared_ptr<string> inputFile_ = nullptr;
    // The keyword information.
    std::shared_ptr<string> keyword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
