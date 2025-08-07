// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUESTSAMPLELIBRARY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUESTSAMPLELIBRARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateAndPulishAgentRequestSampleLibrary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndPulishAgentRequestSampleLibrary& obj) { 
      DARABONBA_PTR_TO_JSON(enableSample, enableSample_);
      DARABONBA_PTR_TO_JSON(sampleLibraryIdList, sampleLibraryIdList_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndPulishAgentRequestSampleLibrary& obj) { 
      DARABONBA_PTR_FROM_JSON(enableSample, enableSample_);
      DARABONBA_PTR_FROM_JSON(sampleLibraryIdList, sampleLibraryIdList_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
    };
    CreateAndPulishAgentRequestSampleLibrary() = default ;
    CreateAndPulishAgentRequestSampleLibrary(const CreateAndPulishAgentRequestSampleLibrary &) = default ;
    CreateAndPulishAgentRequestSampleLibrary(CreateAndPulishAgentRequestSampleLibrary &&) = default ;
    CreateAndPulishAgentRequestSampleLibrary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndPulishAgentRequestSampleLibrary() = default ;
    CreateAndPulishAgentRequestSampleLibrary& operator=(const CreateAndPulishAgentRequestSampleLibrary &) = default ;
    CreateAndPulishAgentRequestSampleLibrary& operator=(CreateAndPulishAgentRequestSampleLibrary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableSample_ != nullptr
        && this->sampleLibraryIdList_ != nullptr && this->topK_ != nullptr; };
    // enableSample Field Functions 
    bool hasEnableSample() const { return this->enableSample_ != nullptr;};
    void deleteEnableSample() { this->enableSample_ = nullptr;};
    inline bool enableSample() const { DARABONBA_PTR_GET_DEFAULT(enableSample_, false) };
    inline CreateAndPulishAgentRequestSampleLibrary& setEnableSample(bool enableSample) { DARABONBA_PTR_SET_VALUE(enableSample_, enableSample) };


    // sampleLibraryIdList Field Functions 
    bool hasSampleLibraryIdList() const { return this->sampleLibraryIdList_ != nullptr;};
    void deleteSampleLibraryIdList() { this->sampleLibraryIdList_ = nullptr;};
    inline const vector<string> & sampleLibraryIdList() const { DARABONBA_PTR_GET_CONST(sampleLibraryIdList_, vector<string>) };
    inline vector<string> sampleLibraryIdList() { DARABONBA_PTR_GET(sampleLibraryIdList_, vector<string>) };
    inline CreateAndPulishAgentRequestSampleLibrary& setSampleLibraryIdList(const vector<string> & sampleLibraryIdList) { DARABONBA_PTR_SET_VALUE(sampleLibraryIdList_, sampleLibraryIdList) };
    inline CreateAndPulishAgentRequestSampleLibrary& setSampleLibraryIdList(vector<string> && sampleLibraryIdList) { DARABONBA_PTR_SET_RVALUE(sampleLibraryIdList_, sampleLibraryIdList) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline CreateAndPulishAgentRequestSampleLibrary& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    std::shared_ptr<bool> enableSample_ = nullptr;
    std::shared_ptr<vector<string>> sampleLibraryIdList_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
