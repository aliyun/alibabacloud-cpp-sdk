// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESPROXYSTATSMATCHER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESPROXYSTATSMATCHER_HPP_
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
  class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& obj) { 
      DARABONBA_PTR_TO_JSON(InclusionPrefixes, inclusionPrefixes_);
      DARABONBA_PTR_TO_JSON(InclusionRegexps, inclusionRegexps_);
      DARABONBA_PTR_TO_JSON(InclusionSuffixes, inclusionSuffixes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& obj) { 
      DARABONBA_PTR_FROM_JSON(InclusionPrefixes, inclusionPrefixes_);
      DARABONBA_PTR_FROM_JSON(InclusionRegexps, inclusionRegexps_);
      DARABONBA_PTR_FROM_JSON(InclusionSuffixes, inclusionSuffixes_);
    };
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher &&) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& operator=(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& operator=(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inclusionPrefixes_ == nullptr
        && return this->inclusionRegexps_ == nullptr && return this->inclusionSuffixes_ == nullptr; };
    // inclusionPrefixes Field Functions 
    bool hasInclusionPrefixes() const { return this->inclusionPrefixes_ != nullptr;};
    void deleteInclusionPrefixes() { this->inclusionPrefixes_ = nullptr;};
    inline const vector<string> & inclusionPrefixes() const { DARABONBA_PTR_GET_CONST(inclusionPrefixes_, vector<string>) };
    inline vector<string> inclusionPrefixes() { DARABONBA_PTR_GET(inclusionPrefixes_, vector<string>) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& setInclusionPrefixes(const vector<string> & inclusionPrefixes) { DARABONBA_PTR_SET_VALUE(inclusionPrefixes_, inclusionPrefixes) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& setInclusionPrefixes(vector<string> && inclusionPrefixes) { DARABONBA_PTR_SET_RVALUE(inclusionPrefixes_, inclusionPrefixes) };


    // inclusionRegexps Field Functions 
    bool hasInclusionRegexps() const { return this->inclusionRegexps_ != nullptr;};
    void deleteInclusionRegexps() { this->inclusionRegexps_ = nullptr;};
    inline const vector<string> & inclusionRegexps() const { DARABONBA_PTR_GET_CONST(inclusionRegexps_, vector<string>) };
    inline vector<string> inclusionRegexps() { DARABONBA_PTR_GET(inclusionRegexps_, vector<string>) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& setInclusionRegexps(const vector<string> & inclusionRegexps) { DARABONBA_PTR_SET_VALUE(inclusionRegexps_, inclusionRegexps) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& setInclusionRegexps(vector<string> && inclusionRegexps) { DARABONBA_PTR_SET_RVALUE(inclusionRegexps_, inclusionRegexps) };


    // inclusionSuffixes Field Functions 
    bool hasInclusionSuffixes() const { return this->inclusionSuffixes_ != nullptr;};
    void deleteInclusionSuffixes() { this->inclusionSuffixes_ = nullptr;};
    inline const vector<string> & inclusionSuffixes() const { DARABONBA_PTR_GET_CONST(inclusionSuffixes_, vector<string>) };
    inline vector<string> inclusionSuffixes() { DARABONBA_PTR_GET(inclusionSuffixes_, vector<string>) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& setInclusionSuffixes(const vector<string> & inclusionSuffixes) { DARABONBA_PTR_SET_VALUE(inclusionSuffixes_, inclusionSuffixes) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher& setInclusionSuffixes(vector<string> && inclusionSuffixes) { DARABONBA_PTR_SET_RVALUE(inclusionSuffixes_, inclusionSuffixes) };


  protected:
    // The prefixes of the custom Envoy statistics that are reported by the sidecar proxy.
    std::shared_ptr<vector<string>> inclusionPrefixes_ = nullptr;
    // The regular expressions for specifying the custom Envoy statistics that are reported by the sidecar proxy.
    std::shared_ptr<vector<string>> inclusionRegexps_ = nullptr;
    // The suffixes of the custom Envoy statistics that are reported by the sidecar proxy.
    std::shared_ptr<vector<string>> inclusionSuffixes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
